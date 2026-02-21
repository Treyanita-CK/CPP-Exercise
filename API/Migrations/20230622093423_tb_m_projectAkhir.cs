using System;
using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace API.Migrations
{
    /// <inheritdoc />
    public partial class tb_m_projectAkhir : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "tb_m_account",
                columns: table => new
                {
                    user_id = table.Column<string>(type: "char(5", nullable: false),
                    user_name = table.Column<string>(type: "varchar(50)", nullable: false),
                    email = table.Column<string>(type: "varchar(50)", nullable: false),
                    password = table.Column<string>(type: "varchar(255)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_tb_m_account", x => x.user_id);
                });

            migrationBuilder.CreateTable(
                name: "tb_m_kategori",
                columns: table => new
                {
                    id = table.Column<int>(type: "int", nullable: false)
                        .Annotation("SqlServer:Identity", "1, 1"),
                    nm_kategori = table.Column<string>(type: "varchar(50)", nullable: false),
                    deskripsi = table.Column<string>(type: "varchar(255)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_tb_m_kategori", x => x.id);
                });

            migrationBuilder.CreateTable(
                name: "tb_m_komentar",
                columns: table => new
                {
                    id_komen = table.Column<string>(type: "char(100)", nullable: false),
                    tgl_komentar = table.Column<DateTime>(type: "datetime", nullable: false),
                    isi_komentar = table.Column<string>(type: "varchar(255)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_tb_m_komentar", x => x.id_komen);
                });

            migrationBuilder.CreateTable(
                name: "tb_m_resep",
                columns: table => new
                {
                    resep_id = table.Column<string>(type: "varchar(100)", nullable: false),
                    nm_resep = table.Column<string>(type: "varchar(100)", nullable: false),
                    deskripsi = table.Column<string>(type: "varchar(255)", nullable: false),
                    bahan = table.Column<string>(type: "varchar(255)", nullable: false),
                    jumlah = table.Column<string>(type: "varchar(20)", nullable: false),
                    satuan = table.Column<string>(type: "varchar(20)", nullable: false),
                    wkt_persiapan = table.Column<string>(type: "varchar(20)", nullable: false),
                    wkt_memasak = table.Column<string>(type: "varchar(20)", nullable: false),
                    kesulitan = table.Column<string>(type: "varchar(20)", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_tb_m_resep", x => x.resep_id);
                });
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "tb_m_account");

            migrationBuilder.DropTable(
                name: "tb_m_kategori");

            migrationBuilder.DropTable(
                name: "tb_m_komentar");

            migrationBuilder.DropTable(
                name: "tb_m_resep");
        }
    }
}
