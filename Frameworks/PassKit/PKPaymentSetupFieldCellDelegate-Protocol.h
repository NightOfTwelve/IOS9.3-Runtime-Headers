//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPaymentSetupFieldCell;

@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional
- (_Bool)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
@end

