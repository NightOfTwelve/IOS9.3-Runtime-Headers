//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
}

- (id)allRepsContainedInGroup;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (Class)layerClass;
- (_Bool)directlyManagesLayerContent;

@end

