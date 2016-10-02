//
//  JYRadarChart.h
//  JYRadarChart
//
//  Created by jy on 13-10-31.
//  Copyright (c) 2013年 wcode. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface JYRadarChart : UIView

@property (nonatomic, assign) IBInspectable CGFloat r;
@property (nonatomic, assign) IBInspectable CGFloat maxValue;
@property (nonatomic, assign) IBInspectable CGFloat minValue;
@property (nonatomic, assign) IBInspectable BOOL drawPoints;
@property (nonatomic, assign) IBInspectable BOOL fillArea;
@property (nonatomic, assign) IBInspectable BOOL showLegend;
@property (nonatomic, assign) IBInspectable BOOL showStepText;
@property (nonatomic, assign) IBInspectable CGFloat colorOpacity;
@property (nonatomic, strong) IBInspectable UIColor *backgroundLineColorRadial;
@property (nonatomic, strong) NSArray<NSArray<NSNumber*>*> *dataSeries;
@property (nonatomic, strong) NSArray<NSString*> *attributes;
@property (nonatomic, assign) IBInspectable NSUInteger steps;
@property (nonatomic, assign) CGPoint centerPoint;
@property (nonatomic, strong) IBInspectable UIColor *backgroundFillColor;
@property (nonatomic) IBInspectable NSUInteger attributeFontSize;

@property (nonatomic) IBInspectable UIColor* stepLineColor;

@property (nonatomic, assign) IBInspectable BOOL clockwise; //direction of data

- (void)setTitles:(NSArray *)titles;
- (void)setColors:(NSArray *)colors;

@end
