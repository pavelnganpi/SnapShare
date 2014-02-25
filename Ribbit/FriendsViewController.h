//
//  FriendsViewController.h
//  Ribbit
//
//  Created by pavey nganpi on 2/12/14.
//  Copyright (c) 2014 pavey nganpi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface FriendsViewController : UITableViewController

@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSArray *friends;

@end
