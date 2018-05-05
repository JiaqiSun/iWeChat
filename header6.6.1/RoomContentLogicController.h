//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "ChatRoomInvitationDetailDelegate-Protocol.h"
#import "ChatroomMemberRemoveViewControllerDelegate-Protocol.h"
#import "IAutoSetRemarkExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMMQRCodeExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "chatRoomInfoDelegate-Protocol.h"
#import "chatRoomSettingDelegate-Protocol.h"

@class ChatRoomInfoSettingMgr, NSString, RoomReportController;

@interface RoomContentLogicController : BaseMsgContentLogicController <chatRoomInfoDelegate, chatRoomSettingDelegate, IGroupMgrExt, IContactMgrExt, RoomContactSelectDelegate, IAutoSetRemarkExt, IMMQRCodeExt, TipsViewDelegate, ChatroomMemberRemoveViewControllerDelegate, ILinkEventExt, WCActionSheetDelegate, MMTipsViewControllerDelegate, ChatRoomInvitationDetailDelegate>
{
    _Bool m_bStartShowRoomContactSelector;
    ChatRoomInfoSettingMgr *m_ChatRoomInfoSettingMgr;
    _Bool m_bTipsShow;
    _Bool m_bPresentRoomContactSelector;
    _Bool m_forbidGetGroupMemberDetail;
    RoomReportController *m_reportController;
}

- (void).cxx_destruct;
- (_Bool)isNeedCached;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)OnChangeMemberVerifyStatus:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)updateChatroomContact:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onRevokeChatroomQRCode:(id)arg1 success:(_Bool)arg2 errTip:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)showRoomContactSelectorViewController;
- (void)dealloc;
- (void)ViewWillInit;
- (_Bool)existEmptyMemberContact;
- (_Bool)CanRemoteRecord;
- (void)onModifyContact:(id)arg1;
- (void)newMessageFromChatRoomInfo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)approveMemberFromOwner:(id)arg1;
- (void)revokeChatRoomQRCode:(id)arg1;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned long long)arg2;
- (void)delChatRoomMemberFromQRcodeScene:(id)arg1;
- (void)delChatRoomMemberFromInvitionScene:(id)arg1;
- (void)modMsgWithoutNotify:(id)arg1;
- (void)processNewXMLInInviteScene:(id)arg1;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3 withUserData:(id)arg4;
- (void)sendInviteFromApproveToInviterScene:(id)arg1;
- (void)processNewXMLInApproveScene:(id)arg1;
- (void)onApproveInvitationSuccess:(id)arg1;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)approveMembersFromApproveScene:(id)arg1;
- (void)jumpToProfile:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)onChatroomMemberRemoveViewCancel;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (void)clearAACount;
- (void)clearNewInvApprove;
- (void)clearNewInvCount;
- (void)clearAtMeCount;
- (void)onInputTextDeleteAll;
- (void)AddAtUser:(id)arg1;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)checkSecurityBannerShow;
- (void)checkAddFriend;
- (void)ViewWillAppear;
- (void)onPerformAction:(id)arg1;
- (void)onPopFromNavigationController;
- (void)WillBePushedLogicController;
- (void)ViewDidInit;
- (void)DidAddMsg:(id)arg1;
- (void)onClickUnreadTip;
- (void)setHasShowUnreadTip;
- (void)ViewDidAppear;
- (void)tryGetChatRoomMemberDetail:(id)arg1;
- (void)checkGetChatRoomInfo:(id)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (id)GetTitleTailImage;
- (id)GetUsrTitleTail;
- (id)GetUsrTitleFront;
- (id)GetUsrTitle;
- (id)GetUsrTitleOld;
- (void)OpenGroupSetting;
- (id)getDefaultChatRoomName;
- (void)OpenDetailInfoForDisplayNameSwitch;
- (void)OpenDetailInfoFromTips;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (_Bool)canShowChatRoomInfo;
- (id)GetRightBarButtonTitle;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarBtn;
- (void)QuitGroup;
- (void)onGroupSetting:(id)arg1;
- (void)switchEarpieceMode;
- (void)StateChanged;
- (_Bool)EnabledOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned int)arg1;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned int)arg1;
- (unsigned int)NumberOfHeaderButtons;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)CanSendTextMsg:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)clearAllMsg;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)getGroupContact;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

