//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLocalNotificationUtil : NSObject
{
}

+ (void)showLocalNotificationWithIdentifier:(id)arg1 category:(id)arg2 title:(id)arg3 body:(id)arg4 soundName:(id)arg5 badge:(id)arg6 userInfo:(id)arg7 date:(id)arg8;
+ (void)showLocalNotificationWithIdentifier:(id)arg1 category:(id)arg2 title:(id)arg3 body:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 date:(id)arg7;
+ (void)showLocalNotificationWithCategory:(id)arg1 title:(id)arg2 body:(id)arg3 soundName:(id)arg4 badge:(id)arg5 userInfo:(id)arg6;
+ (void)showLocalNotificationWithCategory:(id)arg1 title:(id)arg2 body:(id)arg3 badge:(id)arg4 userInfo:(id)arg5;
+ (void)showLocalNotificationWithCategory:(id)arg1 body:(id)arg2 soundName:(id)arg3 userInfo:(id)arg4;
+ (void)showLocalNotificationWithCategory:(id)arg1 body:(id)arg2 userInfo:(id)arg3;
+ (void)showLocalNotificationWithBody:(id)arg1;
+ (void)showLocalNotificationWithInfo:(id)arg1;
+ (void)cancelNotificationWithInfo:(id)arg1;
+ (void)cancelAllNotReservedLocalNotificationsWithCompletion:(CDUnknownBlockType)arg1;

@end

