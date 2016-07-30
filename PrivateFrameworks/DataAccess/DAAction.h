//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DataAccess/NSCoding-Protocol.h>

@interface DAAction : NSObject <NSCoding>
{
    int _changeId;
    long long _itemChangeType;
    id _serverId;
    id _instanceId;
    id _changedItem;
}

@property(nonatomic) int changeId; // @synthesize changeId=_changeId;
- (void)_setChangedItem:(id)arg1;
@property(retain, nonatomic) id changedItem; // @synthesize changedItem=_changedItem;
@property(retain, nonatomic) id instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) id serverId; // @synthesize serverId=_serverId;
@property(nonatomic) long long itemChangeType; // @synthesize itemChangeType=_itemChangeType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)stringForItemChangeType:(long long)arg1;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (struct ASEvent *)event;
- (id)deletedEventID;
- (struct ASContact *)contact;
- (id)deletedContactID;
- (id)message;
- (struct ASToDo *)toDo;
- (id)deletedToDoID;
- (struct ASNote *)note;
- (id)deletedNoteID;

@end

