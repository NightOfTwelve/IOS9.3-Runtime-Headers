//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>
{
    double _destinationCompressionQuality;
    NSURL *_destinationURL;
    struct CGSize _destinationSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)destinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) double destinationCompressionQuality; // @synthesize destinationCompressionQuality=_destinationCompressionQuality;
@property(readonly, nonatomic) struct CGSize destinationSize; // @synthesize destinationSize=_destinationSize;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationSize:(struct CGSize)arg1 destinationCompressionQuality:(double)arg2 destinationURL:(id)arg3;

@end

