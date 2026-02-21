using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Text.Json.Serialization;

namespace API.Models;
[Table("tb_m_komentar")]
public class Komentar
{
    // id
    [Key, Column("id_komen", TypeName ="char(100)")]
    public int Id { get; set; }

    // tanggal komentar
    [Column("tgl_komentar", TypeName = "datetime")]
    public DateTime TanggalKomentar { get; set; }

    // isi komentar
    [Column("isi_komentar", TypeName = "varchar(255)")]
    public string IsiKomentar { get; set; }
}