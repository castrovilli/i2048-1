//
//  LMGame.h
//  i2048
//
//  Created by Alex Leffelman on 4/6/14.
//  Copyright (c) 2014 Alex Leffelman. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LMBoard;

@interface LMGame : NSObject

@property (nonatomic, strong, readonly) LMBoard *board;

- (instancetype)initWithBoard:(LMBoard *)board;

- (BOOL)isOver;

@end