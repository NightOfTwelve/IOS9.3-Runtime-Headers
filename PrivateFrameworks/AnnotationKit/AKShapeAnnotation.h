//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKStrokedAnnotation.h>

#import <AnnotationKit/AKFilledAnnotationProtocol-Protocol.h>

@class NSString, UIColor;

@interface AKShapeAnnotation : AKStrokedAnnotation <AKFilledAnnotationProtocol>
{
    UIColor *_fillColor;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

