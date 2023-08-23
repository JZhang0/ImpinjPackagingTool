using Microsoft.Extensions.Options;

var builder = WebApplication.CreateBuilder(args);

builder.Logging.ClearProviders();
builder.Logging.AddConsole();

builder.Services.AddControllers();
builder.Services.AddSwaggerGen();
builder.Services.AddCors(options =>
{
    options.AddDefaultPolicy(
                      Policy =>
                      {
                        Policy.AllowAnyOrigin();
                        Policy.AllowAnyMethod();
                        Policy.AllowAnyHeader();
                      });
});



var app = builder.Build();
app.Urls.Add("https://*:7235");
app.Urls.Add("http://*:5193");

if (app.Environment.IsDevelopment())
{
    app.UseDeveloperExceptionPage();
    app.UseSwagger();
    app.UseSwaggerUI();
}
else
{
    app.UseExceptionHandler("/Error");
    app.UseHsts();
}

// app.UseHttpsRedirection();
app.UseHttpLogging();
app.UseStaticFiles();
app.UseRouting();
app.UseCors();
app.UseEndpoints(e => { });
app.MapControllers();

// app.UseAuthorization();

app.Run();
