//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <iWorkImport/TSCHMultiDataAnimatingFrameLayerProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCHMultiDataAnimatingFrameLayer : CALayer <TSCHMultiDataAnimatingFrameLayerProtocol>
{
    struct CGRect mPresentationBounds;
    struct CGPoint mPresentationPosition;
}

@property(nonatomic) struct CGPoint presentationPosition; // @synthesize presentationPosition=mPresentationPosition;
@property(nonatomic) struct CGRect presentationBounds; // @synthesize presentationBounds=mPresentationBounds;
- (struct CGRect)currentFrame;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

