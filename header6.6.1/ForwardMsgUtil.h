//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface ForwardMsgUtil : MMObject
{
}

+ (id)GenForwardVideoFromMsgWrap:(id)arg1;
+ (id)readerAppMsgFromReaderWrap:(id)arg1;
+ (id)locMsgFromMsgWrap:(id)arg1;
+ (id)cardMsgFromMsgWrap:(id)arg1;
+ (id)emojiMsgFromMsgWrap:(id)arg1;
+ (id)genForwardAppRecordItemFromMsg:(id)arg1;
+ (id)appMsgFromMsgWrap:(id)arg1;
+ (id)imgMsgFromMsgWrap:(id)arg1;
+ (id)textMsgFromMsgWrap:(id)arg1;
+ (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2;
+ (id)getContactHeadImage:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getMsgRealFrom:(id)arg1;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4 editImageAttr:(id)arg5;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3 forwardType:(unsigned int)arg4;
+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;
+ (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 Scene:(unsigned int)arg3;

@end

