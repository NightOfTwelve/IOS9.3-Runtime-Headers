//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIFacebookViewElement : SKUIViewElement
{
    long long _facebookType;
    NSString *_urlString;
}

@property(readonly, nonatomic) NSString *URLString; // @synthesize URLString=_urlString;
@property(readonly, nonatomic) long long facebookType; // @synthesize facebookType=_facebookType;
- (void).cxx_destruct;
- (long long)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

