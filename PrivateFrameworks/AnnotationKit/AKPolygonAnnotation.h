//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKRectangularShapeAnnotation.h>

#import <AnnotationKit/AKFlippableAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>
{
    _Bool _verticallyFlipped;
    unsigned long long _pointCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property _Bool verticallyFlipped; // @synthesize verticallyFlipped=_verticallyFlipped;
@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property _Bool horizontallyFlipped;
@property(readonly) Class superclass;

@end

