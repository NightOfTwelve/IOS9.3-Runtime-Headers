//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem>
{
    NSString *_label;
    NSURL *_url;
    WBSParsecImageRepresentation *_imageRepresentation;
}

+ (id)schema;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end

