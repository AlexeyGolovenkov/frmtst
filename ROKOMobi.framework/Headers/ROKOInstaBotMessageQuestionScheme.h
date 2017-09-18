//
//  ROKOInstaBotMessageQuestionScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 10/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOComponentScheme.h"
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotFontScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotMessageQuestionScheme : ROKOComponentScheme

@property (nullable, nonatomic, strong) NSNumber* width;
@property (nullable, nonatomic, strong) NSNumber* padding;
@property (nullable, nonatomic, strong) NSNumber* borderRadius;

@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@property (nullable, nonatomic, strong) ROKOInstaBotFontScheme *font;

@end
