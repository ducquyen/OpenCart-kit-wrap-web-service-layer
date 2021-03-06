//
//  CartItemCell.h
//  iApp
//
//  Created by icoco7 on 7/8/14.
//  Copyright (c) 2014 i2Cart.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTableViewCell.h"

@interface CartItemCell : CTableViewCell
{
    NSDictionary* _data;
}
@property(nonatomic)IBOutlet UIImageView* extImageView;

@property(nonatomic)IBOutlet UILabel* labelName;
@property(nonatomic)IBOutlet UILabel* labelModel;
@property(nonatomic)IBOutlet UILabel* labelPrice;
@property(nonatomic)IBOutlet UILabel* labelQuantity;
@property(nonatomic)IBOutlet UILabel* labelTotal;
@property(nonatomic)IBOutlet UIStepper* stepper;

@property(nonatomic) id <ObserverDelegate>observer;

@end
