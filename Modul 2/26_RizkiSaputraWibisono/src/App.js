import React from 'react';
import logo from '../src/wibi.png'
import './App.css';
import 'bootstrap/dist/css/bootstrap.min.css';
import { Table, Card } from 'react-bootstrap';
import Image from 'react-bootstrap/Image';

const Biodata=(props)=>{
  return(
    <div class="container-sm">
        <div class="row">
          <div class="col">
            <Table striped bordered hover>
              <thead>
                <tr>
                  <th colSpan="2">Biodata</th>
                </tr>
              </thead>
              <tbody>
                <tr>
                  <td>Nama Lengkap</td>
                  <td>Rizki Saputra Wibisono</td>
                </tr>
                <tr>
                  <td>NIM</td>
                  <td>1741720142</td>
                </tr>
                <tr>
                  <td>Jurusan / Prodi</td>
                  <td>Teknologi Informasi / D4 Tek. Informatika</td>
                </tr>
                <tr>
                  <td>Alamat</td>
                  <td>Jl. Raya Pacing No.8 Bangsal-Mojokerto</td>
                </tr>
                <tr>
                  <td>Pas Foto</td>
                  <td class="image">
                    <Image src={logo} alt="logo" thumbnail/>
                  </td>
                </tr>
              </tbody>
            </Table>
          </div>
        </div>
    </div>
  )
}

export default Biodata;