//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKThoughtBubbleAnnotation.h>

@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation
{
    double _pointyBitBaseWidthAngle;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
@property double pointyBitBaseWidthAngle; // @synthesize pointyBitBaseWidthAngle=_pointyBitBaseWidthAngle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

@end

