//
//  ROKOInstaBotScheme.h
//  ROKOMobi
//
//  Created by Alexey Golovenkov on 06.09.16.
//  Copyright © 2016 ROKO Labs. All rights reserved.
//

#import "ROKOComponentScheme.h"
#import "ROKOImageDataObject.h"

@class ROKOInstaBotChatBodyScheme;
@class ROKOInstaBotMessageQuestionScheme;
@class ROKOInstaBotChatIconScheme;
@class ROKOInstaBotCloseButtonScheme;
@class ROKOInstaBotUserResponseScheme;

@class ROKOInstaBotUIScheme;

@interface ROKOInstaBotScheme : ROKOComponentScheme

//TODO remove properties below

@property (nonatomic, assign) BOOL useChatIcon;
@property (nonatomic, copy) NSString *closeButtonText;
@property (nonatomic, strong) UIColor *closeButtonTextColor;
@property (nonatomic, strong) UIColor *botDialogueColor;
@property (nonatomic, strong) UIColor *botDialogueTextColor;
@property (nonatomic, strong) UIColor *userDialogueColor;
@property (nonatomic, strong) UIColor *userDialogueTextColor;
@property (nonatomic, strong) UIColor *buttonColor;
@property (nonatomic, strong) UIColor *buttonTextColor;
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) ROKOImageDataObject *icon;

@property (nonatomic, strong) ROKOInstaBotUIScheme *fullScheme;

@end
