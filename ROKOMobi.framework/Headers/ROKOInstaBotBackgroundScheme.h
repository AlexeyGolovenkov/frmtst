//
//  ROKOInstaBotBackgroundScheme.h
//  ROKOMobi
//
//  Created by Alexander Zakatnov on 31/08/2017.
//  Copyright © 2017 ROKO Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ROKOInstaBotUISchemesEnums.h"

@interface ROKOInstaBotBackgroundScheme : NSObject

@property (nullable, nonatomic, strong) NSString*       color;
@property (nonatomic) CGFloat                           opacity;
@property (nullable, nonatomic, strong) NSString*       image;
@property (nonatomic) ROKOInstaBotBackgroundImageRepeatMode     repeat;
@property (nonatomic) ROKOInstaBotBackgroundImagePosition    position;

@end
