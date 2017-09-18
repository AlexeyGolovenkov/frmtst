//
//  ROKOInstaBotScheme.h
//  ROKOMobi
//
//  Created by Alexey Golovenkov on 06.09.16.
//  Copyright © 2016 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ROKOComponentScheme.h"
#import "ROKOImageDataObject.h"

#import "ROKOInstaBotChatBodyScheme.h"
#import "ROKOInstaBotMessageQuestionScheme.h"
#import "ROKOInstaBotChatIconScheme.h"
#import "ROKOInstaBotCloseButtonScheme.h"
#import "ROKOInstaBotUserResponseScheme.h"

@interface ROKOInstaBotScheme : ROKOComponentScheme

@property (nonatomic, strong) ROKOInstaBotChatBodyScheme *chatBody;
@property (nonatomic, strong) ROKOInstaBotMessageQuestionScheme *messageQuestion;
@property (nonatomic, strong) ROKOInstaBotCloseButtonScheme *closeButton;
@property (nonatomic, strong) ROKOInstaBotUserResponseScheme *userResponse;
@property (nonatomic, strong) ROKOInstaBotChatIconScheme *chatIcon;

@end
