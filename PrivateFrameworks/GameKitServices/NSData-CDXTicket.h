//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)
- (_Bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (_Bool)CDXTicketWellFormed;
- (id)CDXTicketTrimmed;
- (_Bool)CDXTicketIsStub;
- (_Bool)CDXTicketIsHolePunch;
- (_Bool)CDXTicketIsReflected;
- (unsigned long long)CDXTicketSID;
- (struct CDXTicket *)mutableCDXTicket;
- (const struct CDXTicket *)CDXTicket;
- (unsigned long long)CDXTicketRevision;
- (id)CDXTicketExpirationDate;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
@end

