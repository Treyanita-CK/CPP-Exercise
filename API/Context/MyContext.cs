using API.Models;
using Microsoft.EntityFrameworkCore;

namespace API.Context;
public class MyContext : DbContext
{
    public MyContext(DbContextOptions<MyContext> options) : base(options) { }
    public DbSet<Account> Accounts { get; set; }
    public DbSet<Resep> Reseps { get; set; }
    public DbSet<Kategori> Kategoris { get; set; }
    public DbSet<Komentar> Komentars { get; set;}

}