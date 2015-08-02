//
//  CTableViewCell.m
//  iApp
//
//  Created by icoco7 on 6/22/14.
//  Copyright (c) 2014 i2Cart.com. All rights reserved.
//

#import "CTableViewCell.h"

@implementation CTableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)setArgs:(NSObject*)args{

    _args = args;
}

- (NSObject*)getArgs
{
    return _args;
}
@end
