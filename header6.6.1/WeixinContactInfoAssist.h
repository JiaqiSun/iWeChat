//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "IAutoSetRemarkExt-Protocol.h"
#import "IAutoSetStrangerAttributeExt-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "MMCPLabelDelegate-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class CContact, CMessageWrap, ContactRelatedGroupLogic, MMTableViewInfo, NSMutableArray, NSString, UIButton;

@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, IAutoSetStrangerAttributeExt, ILinkEventExt, RichTextLayoutDelegate, IHDHeadImageViewExt, WCFacadeExt>
{
    _Bool m_bFirstBecomeFriend;
    UIButton *m_greenBtn;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_hasRequestUpdateAlbum;
    NSString *m_location;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    NSMutableArray *m_arrayAlbum;
    int m_curDownloadEntrance;
    CMessageWrap *m_sourceMsg;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    _Bool _m_bDisableAllOperation;
}

@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getChatRoomMemberContact;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (id)init;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned int)arg2;
- (void)handleAddedContact;
- (void)onVerifyContactOk;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)verifyContactWithOpCode:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartChat:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteContact;
- (void)onAction;
- (void)opBlackList:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipView;
- (void)onExposeByRecommand;
- (void)doAddToBlackList;
- (void)addToBlackList:(id)arg1;
- (void)removeFromBlackList;
- (void)showRightButton;
- (void)initFooterView;
- (void)initQuitRoomTipsLabel;
- (void)initBlackListTipsLabel;
- (void)initFooterBtnArea;
- (void)updateToBigSendMsgBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initExposeBtn;
- (void)initAddContactBtn;
- (void)initVerifyBtn;
- (void)initSayHelloBtn;
- (void)showAlbumList;
- (void)onSayHelloToContact;
- (void)initWCPrivacyButton;
- (void)onOpenVoipActionSheet:(id)arg1;
- (_Bool)initVoipBtn;
- (void)initSendMsgBtn;
- (void)initDeleteBtn;
- (void)reloadTableView;
- (void)initData;
- (void)makeEditRemarkNameCell:(id)arg1 CellInfo:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)makeSourceCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMoreCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescriptionCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeAlbumCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(double)arg3;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5 withPrefixTitle:(id)arg6;
- (id)makeHeadSmallLabel:(id)arg1 Y:(double)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(_Bool)arg5;
- (void)opSetWCStrangerPermissions;
- (void)opSetWCPermissions;
- (void)opEditRemarkName;
- (void)tryCall:(id)arg1;
- (void)onSocialInfoHandle;
- (void)updateFooterView;
- (_Bool)IsShowUserName;
- (_Bool)isNeedHideUserName;
- (_Bool)hasMore;
- (_Bool)isShowAddFriendScene;
- (_Bool)isFromQRCode;
- (id)getInfoDisplayName;
- (_Bool)isNeedVerify;
- (_Bool)isShowExposeButton;
- (_Bool)isShowBlackAction;
- (_Bool)isNeedShowRightBtn;
- (void)initTableView;
- (id)GetTableView;
- (_Bool)isFromStrangeScene;
- (void)dealloc;
- (void)loadLocalContactData;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

