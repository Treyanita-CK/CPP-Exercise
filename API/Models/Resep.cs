using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Text.Json.Serialization;

namespace API.Models;
[Table("tb_m_resep")]
public class Resep 
{
    // id
    [Key, Column("resep_id", TypeName = "varchar(100)")]
    public string IdResep { get; set; }

    // nama resep
    [Column("nm_resep", TypeName ="varchar(100)")]
    public string NamaResep { get; set;}

    // dekskripsi
    [Column("deskripsi", TypeName ="varchar(255)")]
    public string Deskripsi { get; set;}

    // bahan
    [Column("bahan", TypeName ="varchar(255)")]
    public string Bahan { get; set;}

    // jumlah bahan (2 siung bawang)
    [Column("jumlah", TypeName = "varchar(20)")]
    public string Jumlah { get; set; }

    // satuan bahan (100 gr tepung)
    [Column("satuan", TypeName = "varchar(20)")]
    public string Satuan { get; set; }

    // waktu persiapan
    [Column("wkt_persiapan", TypeName ="varchar(20)")]
    public string WaktuPersiapan { get; set;}

    //waktu memasak
    [Column("wkt_memasak", TypeName ="varchar(20)")]
    public string WaktuMemasak { get; set;}

    // kesulitan
    [Column("kesulitan", TypeName = "varchar(20)")]
    public string Kesulitan { get; set; }  
}
