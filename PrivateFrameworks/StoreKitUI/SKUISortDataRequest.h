//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSURL;
@protocol SKUISortDataRequestDelegate;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying>
{
    id <SKUISortDataRequestDelegate> _delegate;
    NSURL *_sortURL;
}

@property(readonly, nonatomic) NSURL *sortURL; // @synthesize sortURL=_sortURL;
@property(nonatomic) __weak id <SKUISortDataRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (id)initWithSortURL:(id)arg1;

@end

