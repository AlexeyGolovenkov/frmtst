//
//  ROKOInstaBotMessageQuestionScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 10/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotFontScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotMessageQuestionScheme : NSObject

@property CGFloat width;
@property CGFloat padding;
@property CGFloat borderRadius;

@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@property (nullable, nonatomic, strong) ROKOInstaBotFontScheme *font;

@end
