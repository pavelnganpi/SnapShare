//
//  SignupViewController.h
//  Ribbit
//
//  Created by pavey nganpi on 2/12/14.
//  Copyright (c) 2014 pavey nganpi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameField;
@property (strong, nonatomic) IBOutlet UITextField *passwordField;
@property (strong, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;

@end
