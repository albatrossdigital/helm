Registration Commerce is a module allowing simple integration between the
Registration module (sometimes called "Entity Registration") and Commerce,
specifically by allowing a Commerce transaction to be attached to a Registration
workflow.

Registration Commerce is sort of the inverse of the Commerce Registration
module, which wants to attach a Registration to a Commerce Product, requiring
a commerce transaction to be started before a Registration can be created. This
module takes a different approach, allowing Registrations in specified states to
be "paid" by triggering creation of a line item in a user's cart. Once paid, a
rule can be triggered to update the status of the original Registration.

# Requirements
Registration Commerce requires Registration and Commerce modules be installed.

# Configuration
1. Download and enable the module.
2. Create or Edit a Registration Type, and visit the Registration Commerce
Settings tab.
3. Enable at least one Registration State for Commerce.
4. You can set a default registration price here. For more complex pricing
schemes, implement hook_registration_commerce_calculate_price($data, $info),
returning a price array with 2 indexes: 'amount' and 'currency_code'.

Now view a registration which belongs to your account and which is in one of the
enabled states. You should see a link to pay for this item.

# Permissions
1. "Administer Registration Commerce" - Allows access to the Registration
Commerce Settings tab on Registration Types.
2. "Pay for any registration product" - Lets users add any Registration to their
cart regardless of who the Registration belongs to or is for, simply by
accessing registration/%entity_id/pay. This is useful for allowing a registrant
to refer the payment to their employer, for example.

# Rules
Registration Commerce adds a couple of rules and rules conditions/actions. Most
important is the "Set state for all registrations in an order" action which
appears in the "Registration" section. Triggering this action on order
completion is a fundamental part of the intended Registration Commerce workflow.
