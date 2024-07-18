import {
  Component,
  Inject,
  OnChanges,
  OnInit,
  SimpleChanges,
} from '@angular/core';
import {
  FormGroup,
  FormControl,
  FormArray,
  FormBuilder,
  FormControlName,
} from '@angular/forms';
import { UserserviceService } from './userservice.service';
import { USER_TOKEN } from './app.module';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  title = 'Practice_Angular';
  //  myForm: FormGroup | any;
  firstname: any;
  signupForm: any;

  /* constructor(private fb: FormBuilder) {
    this.myForm = fb.group({
      fname: new FormControl(),
      lname: new FormControl(),
    });
  }
*/
  /*
  sendData(myForm: any) {
    this.firstname = this.myForm.controls.fname.value;
    console.log(this.myForm.get('fname').value);
    console.log(this.firstname);
  }

   


  ngOnInit() {
    this.signupForm = new FormGroup({
      contactNumbers: new FormArray([
        new FormControl('8819902261'),
        new FormControl('7879431560'),
      ]),
    });
  }
  */

  onSubmit() {
    console.log(this.signupForm.get('contactNumbers').value);
  }
  addNumber() {
    this.signupForm.get('contactNumbers').push(new FormControl());
  }
  setPreset() {
    this.signupForm.get('contactNumbers').patchValue(['hello mohit', 'Lo gya']);
  }

  constructor(@Inject(USER_TOKEN) private userService: UserserviceService) {
    console.log(this.userService);
  }

  // ngOnChanges(changes: SimpleChanges): void {
  // throw new Error('Method not implemented.');
  // }
}
