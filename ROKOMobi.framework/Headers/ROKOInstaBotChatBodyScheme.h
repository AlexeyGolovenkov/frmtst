//
//  ROKOInstaBotChatBodyScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 10/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOComponentScheme.h"
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotChatBodyScheme : ROKOComponentScheme

@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@end
