//
//  ROKOInstaBotCloseButtonScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 15/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOComponentScheme.h"
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotFontScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotCloseButtonFontScheme : ROKOComponentScheme
@property (nullable, nonatomic, strong) NSString*   family;
@property (nullable, nonatomic, strong) NSNumber*   size;
@end

@interface ROKOInstaBotCloseButtonScheme : ROKOComponentScheme

@property (nullable, nonatomic, strong) ROKOInstaBotCloseButtonFontScheme *font;
@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@property (nullable, nonatomic, strong) NSString *text;

@end
