import { Injectable } from '@angular/core';
import { PreloadingStrategy, Route } from '@angular/router';
import { Observable, delay, of, switchMap, tap } from 'rxjs';

@Injectable({ providedIn: 'root' })
export class CustomPreloading extends PreloadingStrategy {
  override preload(route: Route, fn: () => Observable<any>): Observable<any> {
    if (route.data && route.data['preload'] && route.data['delay']) {
      return of(false).pipe(
        delay(6000), // Delay for 2 seconds
        tap(() => console.log('Delay completed for: ' + route.path)),
        switchMap(() => fn()) // Trigger module loading after delay
      );
    }
    return fn();  // for  preloading for this route
  }
}
