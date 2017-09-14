//
//  ROKOInstaBotUIScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 30/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ROKOInstaBotChatBodyScheme.h"
#import "ROKOInstaBotMessageQuestionScheme.h"
#import "ROKOInstaBotCloseButtonScheme.h"
#import "ROKOInstaBotUserResponseScheme.h"
#import "ROKOInstaBotChatIconScheme.h"

@interface ROKOInstaBotUIScheme : NSObject

@property (nonatomic, strong) ROKOInstaBotChatBodyScheme *chatBody;
@property (nonatomic, strong) ROKOInstaBotMessageQuestionScheme *messageQuestion;
@property (nonatomic, strong) ROKOInstaBotCloseButtonScheme *closeButton;
@property (nonatomic, strong) ROKOInstaBotUserResponseScheme *userResponse;
@property (nonatomic, strong) ROKOInstaBotChatIconScheme *chatIcon;

@end
