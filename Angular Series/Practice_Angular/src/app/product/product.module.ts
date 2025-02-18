import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { ProductComponent } from './product.component';
import { Router, RouterModule, Routes } from '@angular/router';

const routes: Routes = [
  {
    path: '',
    component: ProductComponent,
  },
];

@NgModule({
  declarations: [ProductComponent],
  imports: [CommonModule, RouterModule.forChild(routes)],
  exports: [RouterModule],
})
export class ProductModule {
  constructor() {
    console.log('product Module is loadded');
  }
}
