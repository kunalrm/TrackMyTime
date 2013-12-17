//
//  EKChartViewController.h
//  TrackMyTime
//
//  Created by Evgeny Karkan on 14.12.13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EKChartViewController : UIViewController

@property (nonatomic, strong) NSArray *dateModels;
@property (nonatomic, strong) NSString *chartAnnotation;

@end