//
//  ROKOInstaBot.h
//  ROKOMobi
//
//  Created by Alexey Golovenkov on 06.09.16.
//  Copyright © 2016 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ROKOInstaBotViewController.h"
#import "ROKOInstaBotScheme.h"
#import "ROKOInstaBotConversationTreeNode.h"
#import "ROKOComponent.h"

typedef void (^ROKOInstaBotLoadCompletionBlock)(NSError * _Nullable error);

/**
 *  ROKO InstaBot class
 */
@interface ROKOInstaBot : ROKOComponent

/**
 *  Id of the current conversation
 */
@property (nonatomic, assign, readonly) NSInteger conversationId;

/**
 *  Creates a new instance of ROKOInstaBot view controller
 *
 *  @param conversationId Id of conversation on the portal
 *
 *  @return View controller with the conversation
 */
+ (nonnull ROKOInstaBotViewController *)buildControllerWithConversationId:(NSInteger)conversationId;

- (void)loadConversationWithId:(NSInteger)conversationId completionBlock:(nonnull ROKOInstaBotLoadCompletionBlock)completionBlock;

/**
 *  Starts conversation from the begining
 *
 *  @return First question in the conversation
 */
- (nullable ROKOInstaBotConversationTreeNode *)firstQuestion;

- (nullable ROKOInstaBotConversationTreeNode *)nextQuestionForAnswerWithIndex:(NSInteger)answerIndex;

- (nullable ROKOInstaBotConversationTreeNode *)currentQuestion;

/**
 *  All the conversation in the current state
 *
 *  @return All bot questions and user answers
 */
- (nonnull NSArray <NSString *> *)conversationHistory;

- (nullable ROKOInstaBotScheme *)uiScheme;

@end
