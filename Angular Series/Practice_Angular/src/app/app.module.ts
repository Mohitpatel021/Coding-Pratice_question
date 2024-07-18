import { InjectionToken, NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { UserserviceService } from './userservice.service';
export const USER_TOKEN = new InjectionToken<UserserviceService>('USER');
@NgModule({
  declarations: [AppComponent],
  imports: [BrowserModule, AppRoutingModule],
  providers: [{ provide: USER_TOKEN, useClass: UserserviceService }],
  bootstrap: [AppComponent],
})
export class AppModule {
  constructor() {
    console.log('main module is being load');
  }
}
