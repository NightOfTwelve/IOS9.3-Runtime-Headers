//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@interface _UIHostedWindowHostingHandle : NSObject <NSSecureCoding>
{
    unsigned int _contextID;
    struct CGAffineTransform _rootLayerTransform;
    struct CGRect _rootLayerFrame;
}

+ (id)hostedWindowHostingHandleWithContextID:(unsigned int)arg1 rootLayerTransform:(struct CGAffineTransform)arg2 rootLayerFrame:(struct CGRect)arg3;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGRect rootLayerFrame; // @synthesize rootLayerFrame=_rootLayerFrame;
@property(readonly, nonatomic) struct CGAffineTransform rootLayerTransform; // @synthesize rootLayerTransform=_rootLayerTransform;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

