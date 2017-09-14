//
//  ROKOInstaBotCloseButtonScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 15/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOInstaBotUISchemesEnums.h"
#import "ROKOInstaBotFontScheme.h"
#import "ROKOInstaBotBackgroundScheme.h"

@interface ROKOInstaBotCloseButtonFontScheme : NSObject
@property (nullable, nonatomic, strong) NSString*   family;
@property (assign, nonatomic) CGFloat               size;
@end

@interface ROKOInstaBotCloseButtonScheme : NSObject

@property (nullable, nonatomic, strong) ROKOInstaBotCloseButtonFontScheme *font;
@property (nullable, nonatomic, strong) ROKOInstaBotBackgroundScheme *background;

@property (nullable, nonatomic, strong) NSString *text;

@end
