//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGroupMgrExt-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class CContact, NSMutableDictionary, NSString, RoomContactSelectViewController;
@protocol DelMemLogicDelegate;

@interface DelMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt>
{
    id <DelMemLogicDelegate> m_delegate;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    NSMutableDictionary *m_dicWillDell;
    CContact *_m_oContact;
}

@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <DelMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)delMember;
- (void)doDelMember;
- (void)updateRightBtn;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

