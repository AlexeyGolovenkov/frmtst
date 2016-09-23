//
//  ROKOInstaBotConversation.h
//  ROKOMobi
//
//  Created by Alexey Golovenkov on 06.09.16.
//  Copyright © 2016 ROKO Labs. All rights reserved.
//

#import "ROKOInstaBotScheme.h"
#import "ROKOInstaBotConversationTreeNode.h"

@interface ROKOInstaBotConversation : ROKODataObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) ROKOInstaBotScheme *uiScheme;
@property (nonatomic, strong) ROKOInstaBotConversationTreeNode *rootNode;

@end
