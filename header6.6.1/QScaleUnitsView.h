//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor;

@interface QScaleUnitsView : UIView
{
    NSMutableArray *_strings;
    UIColor *_lightColor;
    UIColor *_normalColor;
    UIColor *_strokeColor;
    float _fontSize;
    _Bool _withUnits;
    _Bool _useLightText;
    NSString *_baseLegendString;
    NSString *_unitsString;
    double _segmentLengthInPixels;
    long long _segmentNumber;
}

@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) double segmentLengthInPixels; // @synthesize segmentLengthInPixels=_segmentLengthInPixels;
@property(retain, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property(retain, nonatomic) NSString *baseLegendString; // @synthesize baseLegendString=_baseLegendString;
@property(nonatomic) _Bool useLightText; // @synthesize useLightText=_useLightText;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRectFor7;
- (void)drawRectFor6;
- (id)getFormattedString:(double)arg1;
- (void)calculateLegend;
- (void)initAttributes;
- (id)initWithFrame:(struct CGRect)arg1;

@end

