//
//  ROKOInstaBotUserResponseScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 15/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ROKOComponentScheme.h"
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotFontScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotUserResponseScheme : ROKOComponentScheme

@property (nullable, nonatomic, strong) NSNumber* padding;
@property (nullable, nonatomic, strong) NSNumber* borderRadius;

@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@property (nullable, nonatomic, strong) ROKOInstaBotFontScheme *font;

@end
