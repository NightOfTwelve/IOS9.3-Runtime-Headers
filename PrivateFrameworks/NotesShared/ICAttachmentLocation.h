//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICLocation.h>

#import <NotesShared/ICSearchIndexableTarget-Protocol.h>

@class ICAttachment, NSString;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>
{
}

@property(readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

// Remaining properties
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool placeUpdated; // @dynamic placeUpdated;
@property(readonly) Class superclass;

@end

