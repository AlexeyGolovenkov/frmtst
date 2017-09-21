//
//  ROKOInstaBotChatIconScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 15/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOComponentScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotChatIconScheme : ROKOComponentScheme

@property (nullable, nonatomic, strong) NSNumber* useIcon;

@property (nullable, nonatomic, strong) NSNumber *borderRadius;

@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@end
