using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Text.Json.Serialization;

namespace API.Models;

[Table("tb_m_kategori")]
public class Kategori
{
    // id
    [Key, Column("id")]
    public int Id { get; set; }

    // nama kategori
    [Column("nm_kategori", TypeName = "varchar(50)")]
    public string NamaKategori { get; set; }

    // deskripsi
    [Column("deskripsi", TypeName = "varchar(255)")]
    public string Deskripsi { get; set; }

}