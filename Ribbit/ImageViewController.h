//
//  ImageViewController.h
//  Ribbit
//
//  Created by pavey nganpi on 2/12/14.
//  Copyright (c) 2014 pavey nganpi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
